//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class NSString;

@interface MMFinderLiveRedPacketPromoteEditPanel : NSObject
{
    CDUnknownBlockType _completion;
    NSString *_finderUserName;
}

@property(retain, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)fetchRedPacketInfoForLink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onLinkConfirmed:(id)arg1;
- (id)validUriPrefixes;
- (id)titleText;
- (void)leftButtonAction;
- (id)getCurrentLeftButton;
- (void)setupPageSheetConfig;

@end
