//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MPCommentMsg, NSMutableArray, NSString;

@interface MPCommentBaseCellViewModel : NSObject
{
    double _viewHeight;
    NSMutableArray *_contentLabelStyles;
    struct CGSize _contentLabelSize;
    _Bool _isLastItem;
    _Bool _isSelected;
    _Bool _isLike;
    unsigned int _likeCount;
    MPCommentMsg *_commentMsg;
    double _viewWidth;
    NSString *_content;
    double _headerMargin;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double headerMargin; // @synthesize headerMargin=_headerMargin;
@property(readonly, nonatomic) unsigned int likeCount; // @synthesize likeCount=_likeCount;
@property(readonly, nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
@property(readonly, nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) _Bool isLastItem; // @synthesize isLastItem=_isLastItem;
@property(nonatomic) double viewWidth; // @synthesize viewWidth=_viewWidth;
@property(retain, nonatomic) MPCommentMsg *commentMsg; // @synthesize commentMsg=_commentMsg;
@property(readonly, copy, nonatomic) NSString *headImageUrl;
@property(readonly, copy, nonatomic) NSString *nickname;
- (void)switchThumbsUpStatus;
- (void)clearLabelStyles;
- (id)cellViewClassName;
- (id)creatCommentCellView;
@property(readonly, nonatomic) double labelMaxWidth;
@property(readonly, nonatomic) NSMutableArray *contentLabelStyles;
@property(readonly, nonatomic) double replyContentHeight;
@property(readonly, nonatomic) double viewHeight;
- (id)initWithMPCommentMsg:(id)arg1;

@end

