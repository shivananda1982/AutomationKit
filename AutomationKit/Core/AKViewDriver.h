//
//  AKViewDriver.h
//  AutomationKit
//
//  Created by Luke Redpath on 28/03/2012.
//  Copyright (c) 2012 LJR Software Limited. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AKViewCriteria.h"
#import "AKViewCriteriaWithBlock.h"
#import "AKViewSelector.h"

@protocol AKViewDriver <NSObject>

- (id)initWithViewSelector:(id<AKViewSelector>)viewSelector;
- (void)perform:(void (^)(UIView *))block;
- (id)inspect:(id (^)(UIView *))block;
- (BOOL)assertView:(AKViewCriteriaWithBlockBlock)block onFailure:(NSString *)failureDescription;

@end
