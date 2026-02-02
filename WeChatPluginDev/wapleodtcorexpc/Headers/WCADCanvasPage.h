//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface WCADCanvasPage : NSObject
{
    NSString *bgCoverUrl;
    _Bool isAddBlur;
    NSString *blurColorTheme;
    double blurColorAlpha;
    NSString *bgColorTheme;
    NSArray *originalComponentItemList;
    NSArray *adCanvasComponentItemList;
    int type;
    int subType;
    int bgFillMode;
    int bgCoverAlign;
    int canvasIf;
    int hasIf;
    NSMutableArray *dynamicsInfo;
    NSArray *_forbiddenGlobalItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *forbiddenGlobalItems; // @synthesize forbiddenGlobalItems=_forbiddenGlobalItems;
@property(nonatomic) int hasIf; // @synthesize hasIf;
@property(nonatomic) int canvasIf; // @synthesize canvasIf;
@property(retain, nonatomic) NSMutableArray *dynamicsInfo; // @synthesize dynamicsInfo;
@property(nonatomic) double blurColorAlpha; // @synthesize blurColorAlpha;
@property(retain, nonatomic) NSString *blurColorTheme; // @synthesize blurColorTheme;
@property(nonatomic) int bgCoverAlign; // @synthesize bgCoverAlign;
@property(nonatomic) int bgFillMode; // @synthesize bgFillMode;
@property(nonatomic) _Bool isAddBlur; // @synthesize isAddBlur;
@property(nonatomic) int subType; // @synthesize subType;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSArray *originalComponentItemList; // @synthesize originalComponentItemList;
@property(retain, nonatomic) NSString *bgColorTheme; // @synthesize bgColorTheme;
@property(retain, nonatomic) NSString *bgCoverUrl; // @synthesize bgCoverUrl;
@property(readonly, nonatomic) NSArray *adCanvasComponentItemList; // @synthesize adCanvasComponentItemList;
- (void)updateAdCanvasComponentItemList;
- (_Bool)updateUsingDynamicInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

