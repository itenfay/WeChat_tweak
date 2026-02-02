//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MpEcsJumpInfo, NSMutableArray, NSString;

@interface BrandProfileFuwuInfo : NSObject
{
    unsigned int _type;
    NSString *_id;
    NSString *_titleStr;
    NSString *_valueStr;
    NSMutableArray *_subFuwuInfoList;
    unsigned long long _row;
    unsigned long long _column;
    NSString *_key;
    unsigned long long _showIconType;
    MpEcsJumpInfo *_menuEcsJumpInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MpEcsJumpInfo *menuEcsJumpInfo; // @synthesize menuEcsJumpInfo=_menuEcsJumpInfo;
@property(nonatomic) unsigned long long showIconType; // @synthesize showIconType=_showIconType;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) unsigned long long column; // @synthesize column=_column;
@property(nonatomic) unsigned long long row; // @synthesize row=_row;
@property(retain, nonatomic) NSMutableArray *subFuwuInfoList; // @synthesize subFuwuInfoList=_subFuwuInfoList;
@property(retain, nonatomic) NSString *valueStr; // @synthesize valueStr=_valueStr;
@property(retain, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
- (_Bool)isSameFuwuInfoWith:(id)arg1;

@end

