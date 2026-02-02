//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, WNContentStorage;

@interface WNSecurityInfo : NSObject
{
    int _opType;
    unsigned int _localId;
    NSData *_noteImageData;
    WNContentStorage *_storage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WNContentStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) NSData *noteImageData; // @synthesize noteImageData=_noteImageData;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) int opType; // @synthesize opType=_opType;

@end

