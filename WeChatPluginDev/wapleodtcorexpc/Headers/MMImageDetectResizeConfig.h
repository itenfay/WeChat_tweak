//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMImageDetectResizeConfig : NSObject
{
    unsigned int _preferSize;
    unsigned int _ratioLimit;
    unsigned int _memAreaLimit;
}

@property(nonatomic) unsigned int memAreaLimit; // @synthesize memAreaLimit=_memAreaLimit;
@property(nonatomic) unsigned int ratioLimit; // @synthesize ratioLimit=_ratioLimit;
@property(nonatomic) unsigned int preferSize; // @synthesize preferSize=_preferSize;

@end

