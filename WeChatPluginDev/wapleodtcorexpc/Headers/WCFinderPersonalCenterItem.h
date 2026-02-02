//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderRedDotTipsShowInfo;
@protocol WCFinderPersonalCenterCellProtocol;

@interface WCFinderPersonalCenterItem : NSObject
{
    Class _cellClass;
    long long _tag;
    WCFinderRedDotTipsShowInfo *_redDotInfo;
    CDUnknownBlockType _setupBlock;
    CDUnknownBlockType _clickBlock;
    id <WCFinderPersonalCenterCellProtocol> _weakCell;
}

+ (id)buttonItemWithTitle:(id)arg1 clickBlock:(CDUnknownBlockType)arg2;
+ (id)itemWithCellClass:(Class)arg1 clickBlock:(CDUnknownBlockType)arg2 setupBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderPersonalCenterCellProtocol> weakCell; // @synthesize weakCell=_weakCell;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(copy, nonatomic) CDUnknownBlockType setupBlock; // @synthesize setupBlock=_setupBlock;
@property(retain, nonatomic) WCFinderRedDotTipsShowInfo *redDotInfo; // @synthesize redDotInfo=_redDotInfo;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
- (void)updateCellRedDotInfo;
- (void)handleClickFromVC:(id)arg1;
- (id)dequeueCellFromCollectionView:(id)arg1 indexPath:(id)arg2;
- (double)displayCellHeight;

@end

