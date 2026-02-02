//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WSSImilarPageModel : NSObject
{
    _Bool _continueFlag;
    unsigned int _offset;
    unsigned int _totalCount;
    NSArray *_items;
    NSString *_resultWording;
    NSString *_guideText;
    NSString *_searchID;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
@property(nonatomic) unsigned int totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSString *guideText; // @synthesize guideText=_guideText;
@property(retain, nonatomic) NSString *resultWording; // @synthesize resultWording=_resultWording;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;

@end

