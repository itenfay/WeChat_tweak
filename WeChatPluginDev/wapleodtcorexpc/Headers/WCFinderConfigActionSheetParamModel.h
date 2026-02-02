//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderConfigActionSheetParamModel : NSObject
{
    _Bool _isAuthor;
    _Bool _hasDislike;
    _Bool _isNeedSticyTop;
    _Bool _collectionFlag;
    _Bool _hiddenDeleteItem;
    _Bool _allowModMentionedDisplayStatus;
    unsigned long long _viewerScene;
}

@property(nonatomic) unsigned long long viewerScene; // @synthesize viewerScene=_viewerScene;
@property(nonatomic) _Bool allowModMentionedDisplayStatus; // @synthesize allowModMentionedDisplayStatus=_allowModMentionedDisplayStatus;
@property(nonatomic) _Bool hiddenDeleteItem; // @synthesize hiddenDeleteItem=_hiddenDeleteItem;
@property(nonatomic) _Bool collectionFlag; // @synthesize collectionFlag=_collectionFlag;
@property(nonatomic) _Bool isNeedSticyTop; // @synthesize isNeedSticyTop=_isNeedSticyTop;
@property(nonatomic) _Bool hasDislike; // @synthesize hasDislike=_hasDislike;
@property(nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
- (id)initWithViewerScene:(unsigned long long)arg1;

@end

