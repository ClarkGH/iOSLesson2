//
//  ToDoItem.h
//  Obj-C ToDo
//
//  Created by clark hinchcliff on 7/25/15.
//  Copyright (c) 2015 Clark Hinchcliff. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end