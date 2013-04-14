//
//  FlipsideViewController.h
//  RoundedTableView
//
//  Created by Jeremy Collins on 1/7/10.
//  Copyright Beetlebug Software, LLC 2010. All rights reserved.
//

#import "RoundedUITableView.h"


@protocol FlipsideViewControllerDelegate;


@interface FlipsideViewController : UIViewController {
    id <FlipsideViewControllerDelegate> __weak delegate;
    RoundedUITableView *tableView;
    NSMutableArray *cities;
}


@property (nonatomic, weak) id <FlipsideViewControllerDelegate> delegate;
@property (nonatomic, strong) IBOutlet RoundedUITableView *tableView;


- (IBAction)done;


@end


@protocol FlipsideViewControllerDelegate


- (void)flipsideViewControllerDidFinish:(FlipsideViewController *)controller;


@end

