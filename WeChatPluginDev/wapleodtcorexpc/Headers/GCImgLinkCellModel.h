//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCImgLinkVideoModel, JumpInfo, NSString;

@interface GCImgLinkCellModel
{
    GCImgLinkVideoModel *_videoModel;
    NSString *_coverUrl;
    JumpInfo *_jumpInfo;
    struct CGSize _imgSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) GCImgLinkVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(nonatomic) struct CGSize imgSize; // @synthesize imgSize=_imgSize;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (Class)bindCellClass;
- (id)initWithChatroomMessage:(id)arg1;

@end

