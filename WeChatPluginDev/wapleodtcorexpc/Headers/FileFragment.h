//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface FileFragment : NSObject
{
    unsigned int _m_packageIndex;
    unsigned int _m_totalPackage;
    NSString *_m_filePath;
    NSData *_m_fragmentData;
    unsigned long long _m_uploadId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long m_uploadId; // @synthesize m_uploadId=_m_uploadId;
@property(nonatomic) unsigned int m_totalPackage; // @synthesize m_totalPackage=_m_totalPackage;
@property(nonatomic) unsigned int m_packageIndex; // @synthesize m_packageIndex=_m_packageIndex;
@property(retain, nonatomic) NSData *m_fragmentData; // @synthesize m_fragmentData=_m_fragmentData;
@property(retain, nonatomic) NSString *m_filePath; // @synthesize m_filePath=_m_filePath;
- (unsigned long long)size;
- (id)initWithPath:(id)arg1 fragmentData:(id)arg2 packageIndex:(unsigned int)arg3 totalPackage:(unsigned int)arg4 uploadId:(unsigned long long)arg5;

@end

