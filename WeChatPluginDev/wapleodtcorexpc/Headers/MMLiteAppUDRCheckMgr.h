//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface MMLiteAppUDRCheckMgr
{
    NSArray *_liteAppProjectIdList;
}

+ (id)configCheckParameters;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *liteAppProjectIdList; // @synthesize liteAppProjectIdList=_liteAppProjectIdList;
- (void)haveSpecifiedResource:(id)arg1 name:(id)arg2 version:(unsigned int)arg3;
- (void)postProcess:(id)arg1;
- (id)getParameter;
- (_Bool)addToPeriod;
- (id)getProjectIdList;
- (id)getProjectId;

@end

