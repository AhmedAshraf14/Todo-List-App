//
//  taskDetailsViewController.h
//  ToDo List App
//
//  Created by Ahmed Ashraf on 17/07/2024.
//

#import <UIKit/UIKit.h>
#import "Task.h"
NS_ASSUME_NONNULL_BEGIN

@interface taskDetailsViewController : UIViewController
@property Task * editingTask;
@property BOOL editing;
@property int objectIndex;
@property NSString * pusher;
@end

NS_ASSUME_NONNULL_END
