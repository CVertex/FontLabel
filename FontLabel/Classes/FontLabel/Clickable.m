//
//  Clickable.m
//  FontLabel
//
//  Created by Ben Reeves on 18/03/2010.
//  Copyright 2010 Ben Reeves. All rights reserved.
//

#import "Clickable.h"


@implementation Clickable

@synthesize delegate;
@synthesize selector;
@synthesize object;
@synthesize rect;

+(Clickable*)clickableWithDelegate:(id)delegate selector:(SEL)selector withObject:(id)object
{
	Clickable * clickable = [[[Clickable alloc] init] autorelease];
	clickable.delegate = delegate;
	clickable.selector = selector;
	clickable.object = object;
	
	return clickable;
}

@end