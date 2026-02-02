//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CEmoticonWrap;

@interface EmoticonCustomManageWrap : NSObject
{
    _Bool _needDoFlashAnimation;
    _Bool _userInteractionEnabled;
    _Bool _didShowReverseSelectResult;
    _Bool _isReverseSelecting;
    _Bool _reverseSelectingStatus;
    _Bool _showingSelectStatus;
    unsigned long long _type;
    CEmoticonWrap *_emoticonWrap;
    unsigned long long _status;
    unsigned long long _selectIndex;
    unsigned long long _reverseSelectIndex;
    unsigned long long _temporarySelectOffset;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long temporarySelectOffset; // @synthesize temporarySelectOffset=_temporarySelectOffset;
@property(nonatomic) unsigned long long reverseSelectIndex; // @synthesize reverseSelectIndex=_reverseSelectIndex;
@property(nonatomic) unsigned long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(nonatomic) _Bool showingSelectStatus; // @synthesize showingSelectStatus=_showingSelectStatus;
@property(nonatomic) _Bool reverseSelectingStatus; // @synthesize reverseSelectingStatus=_reverseSelectingStatus;
@property(nonatomic) _Bool isReverseSelecting; // @synthesize isReverseSelecting=_isReverseSelecting;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) _Bool didShowReverseSelectResult; // @synthesize didShowReverseSelectResult=_didShowReverseSelectResult;
@property(nonatomic) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(nonatomic) _Bool needDoFlashAnimation; // @synthesize needDoFlashAnimation=_needDoFlashAnimation;
@property(retain, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned long long showingSelectIndex;
@property(readonly, nonatomic) _Bool shouldShowSelectMask;
@property(readonly, nonatomic) _Bool shouldShowIndex;
@property(readonly, nonatomic) _Bool shouldShowMark;
@property(nonatomic) _Bool isMoving;
@property(nonatomic) _Bool isSelecting;
@property(nonatomic) _Bool isMarked;
- (id)init;

@end

