//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FakeMainFrameCellData : NSObject
{
    _Bool _bNormalCell;
    _Bool _bTopCell;
    NSString *_userName;
    NSString *_textForNameLabel;
    NSString *_textForTimeLabel;
    NSString *_textForMessageLabel;
    double _widthForNameLabel;
}

+ (void)initialize;
+ (void)PBArrayAdd_bTopCell;
+ (void)PBArrayAdd_bNormalCell;
+ (void)PBArrayAdd_widthForNameLabel;
+ (void)PBArrayAdd_textForMessageLabel;
+ (void)PBArrayAdd_textForTimeLabel;
+ (void)PBArrayAdd_textForNameLabel;
+ (void)PBArrayAdd_userName;
- (void).cxx_destruct;
@property _Bool bTopCell; // @synthesize bTopCell=_bTopCell;
@property _Bool bNormalCell; // @synthesize bNormalCell=_bNormalCell;
@property double widthForNameLabel; // @synthesize widthForNameLabel=_widthForNameLabel;
@property(retain) NSString *textForMessageLabel; // @synthesize textForMessageLabel=_textForMessageLabel;
@property(retain) NSString *textForTimeLabel; // @synthesize textForTimeLabel=_textForTimeLabel;
@property(retain) NSString *textForNameLabel; // @synthesize textForNameLabel=_textForNameLabel;
@property(retain) NSString *userName; // @synthesize userName=_userName;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

