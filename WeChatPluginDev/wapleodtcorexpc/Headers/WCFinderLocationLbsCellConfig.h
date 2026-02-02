//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLbsResponse, NSString;

@interface WCFinderLocationLbsCellConfig : NSObject
{
    _Bool _isSelected;
    int _scene;
    unsigned long long _type;
    NSString *_defaultContent;
    FinderLbsResponse *_lbsInfo;
}

- (void).cxx_destruct;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) FinderLbsResponse *lbsInfo; // @synthesize lbsInfo=_lbsInfo;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *defaultContent; // @synthesize defaultContent=_defaultContent;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)getDividerContent;
- (_Bool)isDividerConfig;

@end

