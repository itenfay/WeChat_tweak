//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMBGMSelectedTabTableViewCellConfig : NSObject
{
    _Bool _showLongSeparatorLine;
    NSString *_hightlightQuery;
    unsigned long long _targetType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long targetType; // @synthesize targetType=_targetType;
@property(retain, nonatomic) NSString *hightlightQuery; // @synthesize hightlightQuery=_hightlightQuery;
@property(nonatomic) _Bool showLongSeparatorLine; // @synthesize showLongSeparatorLine=_showLongSeparatorLine;

@end

