//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, FavoritesItemDataField, MultiMediaUploadTask, NSString;

@interface MultiMediaUploadBaseState : NSObject
{
    CMessageWrap *_msgWrap;
    NSString *_taskIdentifier;
    MultiMediaUploadTask *_context;
    FavoritesItemDataField *_dataField;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FavoritesItemDataField *dataField; // @synthesize dataField=_dataField;
@property(nonatomic) __weak MultiMediaUploadTask *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
- (id)getStateName;
- (void)stop;
- (void)start;
- (id)initWithContext:(id)arg1;

@end

