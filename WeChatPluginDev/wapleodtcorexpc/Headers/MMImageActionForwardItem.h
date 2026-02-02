//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, NSString;

@interface MMImageActionForwardItem
{
    ForwardMessageLogicController *_logic;
    NSString *_staticImgUuid;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *staticImgUuid; // @synthesize staticImgUuid=_staticImgUuid;
@property(retain, nonatomic) ForwardMessageLogicController *logic; // @synthesize logic=_logic;
- (id)getCurrentViewController;
- (void)forwardImageWithImagePath:(id)arg1 toContact:(id)arg2;
- (void)handleWithImage;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

