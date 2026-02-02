//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MSETransmitUrlData
{
    NSString *_title;
    NSString *_desc;
    NSString *_thumUrl;
    NSString *_thumPath;
    NSString *_contentUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_thumPath;
+ (void)PBArrayAdd_contentUrl;
+ (void)PBArrayAdd_thumUrl;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *contentUrl; // @synthesize contentUrl=_contentUrl;
@property(retain, nonatomic) NSString *thumPath; // @synthesize thumPath=_thumPath;
@property(retain, nonatomic) NSString *thumUrl; // @synthesize thumUrl=_thumUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

