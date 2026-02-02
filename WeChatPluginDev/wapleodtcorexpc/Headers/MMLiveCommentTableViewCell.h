//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveCommentDataItem, MMLiveCommentTableViewCellFrame;

@interface MMLiveCommentTableViewCell
{
    _Bool _supportDisplayStatus;
    MMLiveCommentTableViewCellFrame *_cellFrame;
    MMLiveCommentDataItem *_commentItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool supportDisplayStatus; // @synthesize supportDisplayStatus=_supportDisplayStatus;
@property(retain, nonatomic) MMLiveCommentDataItem *commentItem; // @synthesize commentItem=_commentItem;
@property(retain, nonatomic) MMLiveCommentTableViewCellFrame *cellFrame; // @synthesize cellFrame=_cellFrame;
- (void)willDisplay;
- (void)reloadLikeInfo;
- (void)prepareForDisplay;

@end

