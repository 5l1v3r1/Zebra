//
//  ZBRefreshViewController.m
//  Zebra
//
//  Created by Wilson Styres on 11/30/18.
//  Copyright © 2018 Wilson Styres. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ZBDatabaseDelegate.h>

@interface ZBRefreshViewController : UIViewController <ZBDatabaseDelegate>
@property (nonatomic) BOOL dropTables;
@end

