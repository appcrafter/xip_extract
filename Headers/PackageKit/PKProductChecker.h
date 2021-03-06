//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString, PKDistribution;

@interface PKProductChecker : NSObject
{
    NSString *_contentPath;	// 8 = 0x8
    NSString *_interfaceType;	// 16 = 0x10
    PKDistribution *_distribution;	// 24 = 0x18
    NSMutableArray *_checkResults;	// 32 = 0x20
    BOOL _allowExternalPackages;	// 40 = 0x28
    BOOL _interfaceTypeRequired;	// 41 = 0x29
    NSArray *_checkedFileAttributes;	// 48 = 0x30
}

+ (id)stringForCheckErrorCode:(int)arg1;	// IMP=0x000000000006f69d
@property(copy) NSArray *checkedFileAttributes; // @synthesize checkedFileAttributes=_checkedFileAttributes;
@property BOOL interfaceTypeRequired; // @synthesize interfaceTypeRequired=_interfaceTypeRequired;
@property BOOL allowExternalPackages; // @synthesize allowExternalPackages=_allowExternalPackages;
- (void)_checkPackagesForChoice:(id)arg1;	// IMP=0x000000000006f734
- (id)checkResults;	// IMP=0x000000000006f50d
- (void)dealloc;	// IMP=0x000000000006f464
- (id)initWithUnarchivedProduct:(id)arg1 interfaceType:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006f228

@end

