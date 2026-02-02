//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMFinderLiveCommonOnlineMemberSheetOpenParams : NSObject
{
    _Bool _isPK;
    _Bool _isDoubleSidePK;
    _Bool _isRedSide;
    NSArray *_owners;
    NSString *_targetOwnerName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *targetOwnerName; // @synthesize targetOwnerName=_targetOwnerName;
@property(retain, nonatomic) NSArray *owners; // @synthesize owners=_owners;
@property(nonatomic) _Bool isRedSide; // @synthesize isRedSide=_isRedSide;
@property(nonatomic) _Bool isDoubleSidePK; // @synthesize isDoubleSidePK=_isDoubleSidePK;
@property(nonatomic) _Bool isPK; // @synthesize isPK=_isPK;

@end

