//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMapTable, UIFont;

@interface WCFinderHeadContactInfoLayoutCache : NSObject
{
    _Bool _hasChangeFontSize;
    _Bool _lineBreakByClipping;
    NSMapTable *_otherViewLayoutTable;
    unsigned long long _currentShowLineType;
    UIFont *_nameFont;
    unsigned long long _lineNumber;
    struct CGRect _nicknameRect;
}

+ (id)cacheWithNameTextView:(id)arg1 otherViews:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool lineBreakByClipping; // @synthesize lineBreakByClipping=_lineBreakByClipping;
@property(nonatomic) unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(retain, nonatomic) UIFont *nameFont; // @synthesize nameFont=_nameFont;
@property(nonatomic) struct CGRect nicknameRect; // @synthesize nicknameRect=_nicknameRect;
@property(nonatomic) _Bool hasChangeFontSize; // @synthesize hasChangeFontSize=_hasChangeFontSize;
@property(nonatomic) unsigned long long currentShowLineType; // @synthesize currentShowLineType=_currentShowLineType;
@property(retain, nonatomic) NSMapTable *otherViewLayoutTable; // @synthesize otherViewLayoutTable=_otherViewLayoutTable;
- (void)recoverWithNameTextView:(id)arg1 otherViews:(id)arg2;
- (void)cacheWithNameTextView:(id)arg1 otherViews:(id)arg2;
- (id)init;

@end

