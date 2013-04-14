//
//  RoundedTableViewAppDelegate.h
//  RoundedTableView
//
//  Created by Jeremy Collins on 1/7/10.
//  Copyright Beetlebug Software, LLC 2010. All rights reserved.
//

@class MainViewController;

@interface RoundedTableViewAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    MainViewController *mainViewController;
}

@property (nonatomic, strong) IBOutlet UIWindow *window;
@property (nonatomic, strong) MainViewController *mainViewController;

@end

