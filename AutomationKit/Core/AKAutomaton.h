//
//  Automaton.h
//  AutomationKit
//
//  Created by Luke Redpath on 26/03/2012.
//  Copyright (c) 2012 LJR Software Limited. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol AKAutomaton <NSObject>

- (void)tapView:(UIView *)view;
- (void)tapView:(UIView *)view atPoint:(CGPoint)point;

@end
