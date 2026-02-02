//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCOActivityMsgInfo : NSObject
{
    int _type;
    NSString *_title;
    NSString *_desc;
    NSString *_imgUrl;
    NSString *_startBtnTxt;
}

+ (void)initialize;
+ (void)PBArrayAdd_startBtnTxt;
+ (void)PBArrayAdd_imgUrl;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_type;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *startBtnTxt; // @synthesize startBtnTxt=_startBtnTxt;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

