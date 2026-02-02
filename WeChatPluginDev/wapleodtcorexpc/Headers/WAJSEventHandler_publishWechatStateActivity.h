//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TextStateBrandLogic;

@interface WAJSEventHandler_publishWechatStateActivity
{
    TextStateBrandLogic *_brandLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TextStateBrandLogic *brandLogic; // @synthesize brandLogic=_brandLogic;
- (void)onTextStatePublishCancelled;
- (void)onTextStatePublished;
- (void)handleJSEvent:(id)arg1;

@end

