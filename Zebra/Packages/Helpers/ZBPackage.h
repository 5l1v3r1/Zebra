//
//  ZBPackage.h
//  Zebra
//
//  Created by Wilson Styres on 11/30/18.
//  Copyright © 2018 Wilson Styres. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZBPackage : NSObject
@property (nonatomic, strong) NSString *packageName;
@property (nonatomic, strong) NSString *packageID;

- (id)initWithPackageIdentifier:(NSString *)identifier name:(NSString *)name;
- (NSString *)packageIdentifier;
- (NSString *)packageName;
@end

NS_ASSUME_NONNULL_END
