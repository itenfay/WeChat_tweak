//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EdgeComputingDBService;

@interface EdgeComputingJsApiSaveToTable : NSObject
{
    EdgeComputingDBService *_dBService;
}

- (void)clear;
- (unsigned int)getType;
- (id)functionName;
- (id)logic:(id)arg1;
- (_Bool)registerIntoContext:(id)arg1;

@end

