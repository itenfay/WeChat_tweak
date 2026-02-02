//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray;

@interface MJTemplateListSvrDataCacheModel : NSObject
{
    double _fetchTimeStamp;
    unsigned int _validityTerm;
    unsigned long long _scene;
    NSMutableArray *_templateList;
    NSMutableArray *_categoryList;
    NSData *_pageBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *pageBuffer; // @synthesize pageBuffer=_pageBuffer;
@property(retain, nonatomic) NSMutableArray *categoryList; // @synthesize categoryList=_categoryList;
@property(retain, nonatomic) NSMutableArray *templateList; // @synthesize templateList=_templateList;
@property(nonatomic) unsigned int validityTerm; // @synthesize validityTerm=_validityTerm;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (_Bool)isValid;
- (id)init;

@end

