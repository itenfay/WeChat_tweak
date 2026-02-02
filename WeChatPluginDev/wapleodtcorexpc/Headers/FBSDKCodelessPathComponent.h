//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FBSDKCodelessPathComponent : NSObject
{
    int _index;
    int _tag;
    int _section;
    int _row;
    int _matchBitmask;
    NSString *_className;
    NSString *_text;
    NSString *_hint;
    NSString *_desc;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int matchBitmask; // @synthesize matchBitmask=_matchBitmask;
@property(readonly, nonatomic) int row; // @synthesize row=_row;
@property(readonly, nonatomic) int section; // @synthesize section=_section;
@property(readonly, nonatomic) int tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) int index; // @synthesize index=_index;
@property(readonly, copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(readonly, copy, nonatomic) NSString *hint; // @synthesize hint=_hint;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSString *className; // @synthesize className=_className;
- (id)initWithJSON:(id)arg1;

@end

