//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MBJSFunction;

@interface MBEventHandlerBaseAsync
{
    MBJSFunction *_callbackFunc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MBJSFunction *callbackFunc; // @synthesize callbackFunc=_callbackFunc;
- (void)callback:(id)arg1;
- (void)invoke:(id)arg1;

@end

