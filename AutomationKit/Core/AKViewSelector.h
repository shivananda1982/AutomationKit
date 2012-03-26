//
//  AKViewSelector.h
//  AutomationKit
//
//  Created by Luke Redpath on 26/03/2012.
//  Copyright (c) 2012 LJR Software Limited. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AKProbe.h"

@protocol AKViewSelector <AKProbe>

- (UIView *)view;

@end
