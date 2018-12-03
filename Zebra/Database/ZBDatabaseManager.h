//
//  ZBDatabaseManager.h
//  Zebra
//
//  Created by Wilson Styres on 11/30/18.
//  Copyright © 2018 Wilson Styres. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZBDatabaseManager : NSObject
- (void)fullImport;
- (void)importRemote;
- (void)importLocal;
- (NSArray <NSDictionary *> *)allPackages;
@end

NS_ASSUME_NONNULL_END
