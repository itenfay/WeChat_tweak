//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TextStateModel;

@interface TextStateDataSimpleProvider : NSObject
{
    _Bool _visable;
    TextStateModel *_textState;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool visable; // @synthesize visable=_visable;
@property(retain, nonatomic) TextStateModel *textState; // @synthesize textState=_textState;
- (void)configureCardView:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)beginIndex;
- (unsigned long long)count;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

