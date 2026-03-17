//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface PatDisplayConfiguration : NSObject
{
    _Bool _showLink;
    _Bool _showTextStateIcon;
    _Bool _showHighlightPat;
    _Bool _enableChangeSuffixRemind;
}

+ (id)attributedHighlightConfiguration;
+ (id)pureTextConfiguration;
+ (id)chatConfiguration;
@property(nonatomic) _Bool enableChangeSuffixRemind; // @synthesize enableChangeSuffixRemind=_enableChangeSuffixRemind;
@property(nonatomic) _Bool showHighlightPat; // @synthesize showHighlightPat=_showHighlightPat;
@property(nonatomic) _Bool showTextStateIcon; // @synthesize showTextStateIcon=_showTextStateIcon;
@property(nonatomic) _Bool showLink; // @synthesize showLink=_showLink;

@end

