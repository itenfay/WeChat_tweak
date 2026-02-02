//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface MMLiveViewLayoutConfig : NSObject
{
    _Bool _visiableInPortait;
    _Bool _visiableInLandscape;
    _Bool _supportClearContents;
    unsigned int _visibleBit;
    NSString *_viewId;
    NSString *_parentViewId;
    NSNumber *_top;
    NSNumber *_left;
    NSNumber *_right;
    NSNumber *_bottom;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_centerX;
    NSNumber *_centerY;
    NSString *_relativeViewId;
    NSArray *_relativeConstraints;
}

+ (id)configListFromXLabConfigString:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *relativeConstraints; // @synthesize relativeConstraints=_relativeConstraints;
@property(retain, nonatomic) NSString *relativeViewId; // @synthesize relativeViewId=_relativeViewId;
@property(retain, nonatomic) NSNumber *centerY; // @synthesize centerY=_centerY;
@property(retain, nonatomic) NSNumber *centerX; // @synthesize centerX=_centerX;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(retain, nonatomic) NSNumber *bottom; // @synthesize bottom=_bottom;
@property(retain, nonatomic) NSNumber *right; // @synthesize right=_right;
@property(retain, nonatomic) NSNumber *left; // @synthesize left=_left;
@property(retain, nonatomic) NSNumber *top; // @synthesize top=_top;
@property(nonatomic) unsigned int visibleBit; // @synthesize visibleBit=_visibleBit;
@property(nonatomic) _Bool supportClearContents; // @synthesize supportClearContents=_supportClearContents;
@property(nonatomic) _Bool visiableInLandscape; // @synthesize visiableInLandscape=_visiableInLandscape;
@property(nonatomic) _Bool visiableInPortait; // @synthesize visiableInPortait=_visiableInPortait;
@property(retain, nonatomic) NSString *parentViewId; // @synthesize parentViewId=_parentViewId;
@property(retain, nonatomic) NSString *viewId; // @synthesize viewId=_viewId;
- (void)updateWithConfigDictionary:(id)arg1;
- (void)updateWithXLabConfig:(id)arg1;
- (id)init;
- (id)initWithXLabConfig:(id)arg1;

@end

