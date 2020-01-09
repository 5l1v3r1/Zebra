//
//  ZBSourceVerificationDelegate.h
//  Zebra
//
//  Created by Wilson Styres on 1/5/20.
//  Copyright © 2020 Wilson Styres. All rights reserved.
//

@class ZBBaseSource;

#import "ZBSourceVerification.h"

#ifndef ZBSourceVerificationDelegate_h
#define ZBSourceVerificationDelegate_h

@protocol ZBSourceVerificationDelegate <NSObject>

- (void)startedSourceVerification:(BOOL)multiple;
- (void)source:(ZBBaseSource *)source status:(ZBSourceVerification)status;
- (void)finishedSourceVerification;

@optional

- (void)verifyAndAdd:(NSSet *)baseSources;

@end

#endif /* ZBSourceVerificationDelegate_h */
