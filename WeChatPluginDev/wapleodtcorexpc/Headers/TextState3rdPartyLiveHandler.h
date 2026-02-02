//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderLiveShareItem;

@interface TextState3rdPartyLiveHandler
{
    WCFinderLiveShareItem *_liveShareItem;
}

+ (id)liveShareItemFromXML:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveShareItem *liveShareItem; // @synthesize liveShareItem=_liveShareItem;
- (id)reportActivityId;
- (_Bool)autoHandleAppLifeCycleEvent;
- (id)mediaDescription;
- (_Bool)allowReferBackground;
- (id)mediaCoverView;
- (id)mediaContentView;
- (_Bool)doHeadImageActionWithViewController:(id)arg1;
- (_Bool)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
- (_Bool)useCoverForContent;
- (id)name;
- (id)customView;
- (_Bool)preferCustomView;
- (id)headImageView;
- (id)title;
- (unsigned int)type;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;
- (_Bool)supportCustomMedia;

@end

