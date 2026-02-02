//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol TextStateRedDotLogicDelegate;

@interface TextStateRedDotLogic : NSObject
{
    id <TextStateRedDotLogicDelegate> _delegate;
    NSMutableDictionary *_redDotToHandlerDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *redDotToHandlerDict; // @synthesize redDotToHandlerDict=_redDotToHandlerDict;
@property(nonatomic) __weak id <TextStateRedDotLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)handlerForRedDot:(unsigned int)arg1;
- (void)disposeRedDot:(unsigned int)arg1;
- (_Bool)shouldShowRedDot:(unsigned int)arg1;
- (id)init;

@end

