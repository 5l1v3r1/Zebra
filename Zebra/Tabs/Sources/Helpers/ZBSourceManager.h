//
//  ZBSourceManager.h
//  Zebra
//
//  Created by Wilson Styres on 11/30/18.
//  Copyright © 2018 Wilson Styres. All rights reserved.
//

@class ZBSource;
@class ZBBaseSource;

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZBSourceManager : NSObject
@property (nonatomic) NSMutableArray <ZBBaseSource *> *verifiedSources;
+ (instancetype)sharedInstance;
+ (NSArray <NSString *> *)knownDistURLs;
- (NSMutableDictionary <NSNumber *, ZBSource *> *)repos;
- (void)addSourceWithString:(NSString *)urlString response:(void (^)(BOOL success, NSString *error, NSURL *url))respond;
- (void)addSourcesFromString:(NSString *)sourcesString response:(void (^)(BOOL success, BOOL multiple, NSString *error, NSArray<NSURL *> *failedURLs))respond;
- (void)deleteSource:(ZBSource *)delRepo;
- (void)deleteBaseSource:(ZBBaseSource *)baseSource;
- (void)addDebLine:(NSString *)sourceLine;
- (void)transferFromCydia;
- (void)transferFromSileo;
- (void)transferFromInstaller;
- (void)needRecaching;
- (void)mergeSourcesFrom:(NSURL *)fromURL into:(NSURL *)destinationURL completion:(void (^)(NSError *error))completion;
- (NSString *)knownDebLineFromURLString:(NSString *)urlString;
@end

NS_ASSUME_NONNULL_END
