//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCMomentsPageContext;

@interface WCListViewParams : NSObject
{
    _Bool _bHideBackgroundCover;
    _Bool _isStarBrowsingEnabled;
    WCMomentsPageContext *_pageContext;
    long long _puzzleImageViewLayoutStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long puzzleImageViewLayoutStyle; // @synthesize puzzleImageViewLayoutStyle=_puzzleImageViewLayoutStyle;
@property(nonatomic) _Bool isStarBrowsingEnabled; // @synthesize isStarBrowsingEnabled=_isStarBrowsingEnabled;
@property(nonatomic) _Bool bHideBackgroundCover; // @synthesize bHideBackgroundCover=_bHideBackgroundCover;
@property(retain, nonatomic) WCMomentsPageContext *pageContext; // @synthesize pageContext=_pageContext;

@end

