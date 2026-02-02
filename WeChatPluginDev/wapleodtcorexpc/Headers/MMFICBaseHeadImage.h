//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface MMFICBaseHeadImage : NSObject
{
    NSString *_usrName;
    NSString *_sourceImgUrl;
    NSString *_entityUUID;
    NSString *_sourceImageUUID;
    unsigned int _eliminationFactor;
    NSString *_formatName;
}

+ (id)genFICEntity:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *formatName; // @synthesize formatName=_formatName;
@property(nonatomic) unsigned int eliminationFactor; // @synthesize eliminationFactor=_eliminationFactor;
@property(retain, nonatomic) NSString *sourceImgUrl; // @synthesize sourceImgUrl=_sourceImgUrl;
@property(retain, nonatomic) NSString *usrName; // @synthesize usrName=_usrName;
- (CDUnknownBlockType)drawingBlockForImage:(id)arg1;
@property(readonly, nonatomic) UIImage *sourceImage;
@property(readonly, nonatomic) NSString *sourceImageUUID;
@property(readonly, nonatomic) NSString *entityUUID;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

