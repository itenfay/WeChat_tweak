//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCCanvasComponentScrollGroupInfo;

@interface WCCanvasComponentNewScrollInfo
{
    WCCanvasComponentScrollGroupInfo *_componentGroupList;
    NSString *_bgColorTheme;
    double _bgColorAlpha;
}

- (void).cxx_destruct;
@property(nonatomic) double bgColorAlpha; // @synthesize bgColorAlpha=_bgColorAlpha;
@property(retain, nonatomic) NSString *bgColorTheme; // @synthesize bgColorTheme=_bgColorTheme;
@property(retain, nonatomic) WCCanvasComponentScrollGroupInfo *componentGroupList; // @synthesize componentGroupList=_componentGroupList;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

