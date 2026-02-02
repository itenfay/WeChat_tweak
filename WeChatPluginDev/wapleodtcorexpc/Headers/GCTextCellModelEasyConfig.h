//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GCTextCellLayoutInfo, NSString;

@interface GCTextCellModelEasyConfig : NSObject
{
    _Bool _showHead;
    NSString *_text;
    GCTextCellLayoutInfo *_layoutInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showHead; // @synthesize showHead=_showHead;
@property(retain, nonatomic) GCTextCellLayoutInfo *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;

@end

