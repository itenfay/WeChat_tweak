//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WAPlateAuthorizeSheetInfo
{
    _Bool _isAcceptProtocol;
    NSMutableArray *_plateList;
    NSString *_defaultPlateStr;
    NSString *_createSubDesc;
}

+ (id)convertPlateListFromProto:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAcceptProtocol; // @synthesize isAcceptProtocol=_isAcceptProtocol;
@property(retain, nonatomic) NSString *createSubDesc; // @synthesize createSubDesc=_createSubDesc;
@property(retain, nonatomic) NSString *defaultPlateStr; // @synthesize defaultPlateStr=_defaultPlateStr;
@property(retain, nonatomic) NSMutableArray *plateList; // @synthesize plateList=_plateList;
- (_Bool)configPlateInfoFromProto:(id)arg1;
- (void)configInfoWithIconUrl:(id)arg1 appName:(id)arg2;
- (id)init;

@end

