//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CameraScanGoodsSearchInfo : NSObject
{
    unsigned int _h5TmplVersion;
    unsigned int _searchScene;
    NSString *_phashStr;
    NSString *_phashVersion;
    NSString *_fromURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fromURL; // @synthesize fromURL=_fromURL;
@property(retain, nonatomic) NSString *phashVersion; // @synthesize phashVersion=_phashVersion;
@property(retain, nonatomic) NSString *phashStr; // @synthesize phashStr=_phashStr;
@property(nonatomic) unsigned int searchScene; // @synthesize searchScene=_searchScene;
@property(nonatomic) unsigned int h5TmplVersion; // @synthesize h5TmplVersion=_h5TmplVersion;

@end

