//
//  Clickable.h
//  FontLabel
//
//  Created by Ben Reeves on 18/03/2010.
//  Copyright 2010 Ben Reeves. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Clickable : NSObject 
{
	id delegate;
	SEL selector;
	id object;
	CGRect rect;
}

@property(nonatomic, retain) id object;
@property(nonatomic, assign) id delegate;
@property(nonatomic, assign) SEL selector;
@property(nonatomic, assign) CGRect rect;

+(Clickable*)clickableWithDelegate:(id)delegate selector:(SEL)selector withObject:(id)object;

@end