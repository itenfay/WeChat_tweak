//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfo, FinderLiveListenPromoteInfo, FinderLivePromoteInfoRedPacketCover, FinderLiveShopWindowAdItem, FinderPaidCollectionInfo;

@interface MMFinderLivePromoteListBaseViewItem : NSObject
{
    _Bool _isContainItem;
    unsigned int _type;
    FinderLiveShopWindowAdItem *_adItem;
    FinderJumpInfo *_jumpInfo;
    FinderLivePromoteInfoRedPacketCover *_redPacketCover;
    FinderLiveListenPromoteInfo *_listenPromoteInfo;
    FinderPaidCollectionInfo *_paidCollectionInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isContainItem; // @synthesize isContainItem=_isContainItem;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) FinderPaidCollectionInfo *paidCollectionInfo; // @synthesize paidCollectionInfo=_paidCollectionInfo;
@property(retain, nonatomic) FinderLiveListenPromoteInfo *listenPromoteInfo; // @synthesize listenPromoteInfo=_listenPromoteInfo;
@property(retain, nonatomic) FinderLivePromoteInfoRedPacketCover *redPacketCover; // @synthesize redPacketCover=_redPacketCover;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) FinderLiveShopWindowAdItem *adItem; // @synthesize adItem=_adItem;

@end

