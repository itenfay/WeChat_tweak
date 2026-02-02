//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCProgressViewShowAction
{
    long long _currentStepMode;
}

@property(nonatomic) long long currentStepMode; // @synthesize currentStepMode=_currentStepMode;
@property(readonly, copy, nonatomic) CDUnknownBlockType stepMode;
@property(readonly, copy, nonatomic) CDUnknownBlockType text;
@property(readonly, copy, nonatomic) CDUnknownBlockType block;
@property(readonly, copy, nonatomic) CDUnknownBlockType progress;

@end

